# Design Pattern: Structural - Adapter
Base template for repositories of C++
Consider a scenario where the client is running an oil import business. The Client system is designed to work with the imperial system, which only understand Oil quantity in Gallons. The client wants the functionality to purchase oil from the traders.

We already have a similar functionality implemented which can allow client to purchase oil from traders but the functionality accepts metric system i.e. oil quantity in litres.

To tackle this issue, we will use Adapter Design Pattern that will provide client expected functionality with works with the imperial system.