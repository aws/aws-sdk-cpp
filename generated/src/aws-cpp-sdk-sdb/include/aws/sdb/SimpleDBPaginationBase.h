#pragma once

namespace Aws {
namespace SimpleDB {
template <typename ClientType>
class SimpleDBPaginationBase {
 public:
  virtual ~SimpleDBPaginationBase() = default;
};
}  // namespace SimpleDB
}  // namespace Aws
