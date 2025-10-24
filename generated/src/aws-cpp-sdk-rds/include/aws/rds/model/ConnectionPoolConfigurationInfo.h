﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Displays the settings that control the size and behavior of the connection
 * pool associated with a <code>DBProxyTarget</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ConnectionPoolConfigurationInfo">AWS
 * API Reference</a></p>
 */
class ConnectionPoolConfigurationInfo {
 public:
  AWS_RDS_API ConnectionPoolConfigurationInfo() = default;
  AWS_RDS_API ConnectionPoolConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API ConnectionPoolConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The maximum size of the connection pool for each target in a target group.
   * The value is expressed as a percentage of the <code>max_connections</code>
   * setting for the RDS DB instance or Aurora DB cluster used by the target
   * group.</p>
   */
  inline int GetMaxConnectionsPercent() const { return m_maxConnectionsPercent; }
  inline bool MaxConnectionsPercentHasBeenSet() const { return m_maxConnectionsPercentHasBeenSet; }
  inline void SetMaxConnectionsPercent(int value) {
    m_maxConnectionsPercentHasBeenSet = true;
    m_maxConnectionsPercent = value;
  }
  inline ConnectionPoolConfigurationInfo& WithMaxConnectionsPercent(int value) {
    SetMaxConnectionsPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls how actively the proxy closes idle database connections in the
   * connection pool. The value is expressed as a percentage of the
   * <code>max_connections</code> setting for the RDS DB instance or Aurora DB
   * cluster used by the target group. With a high value, the proxy leaves a high
   * percentage of idle database connections open. A low value causes the proxy to
   * close more idle connections and return them to the database.</p>
   */
  inline int GetMaxIdleConnectionsPercent() const { return m_maxIdleConnectionsPercent; }
  inline bool MaxIdleConnectionsPercentHasBeenSet() const { return m_maxIdleConnectionsPercentHasBeenSet; }
  inline void SetMaxIdleConnectionsPercent(int value) {
    m_maxIdleConnectionsPercentHasBeenSet = true;
    m_maxIdleConnectionsPercent = value;
  }
  inline ConnectionPoolConfigurationInfo& WithMaxIdleConnectionsPercent(int value) {
    SetMaxIdleConnectionsPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds for a proxy to wait for a connection to become
   * available in the connection pool. Only applies when the proxy has opened its
   * maximum number of connections and all connections are busy with client
   * sessions.</p>
   */
  inline int GetConnectionBorrowTimeout() const { return m_connectionBorrowTimeout; }
  inline bool ConnectionBorrowTimeoutHasBeenSet() const { return m_connectionBorrowTimeoutHasBeenSet; }
  inline void SetConnectionBorrowTimeout(int value) {
    m_connectionBorrowTimeoutHasBeenSet = true;
    m_connectionBorrowTimeout = value;
  }
  inline ConnectionPoolConfigurationInfo& WithConnectionBorrowTimeout(int value) {
    SetConnectionBorrowTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Each item in the list represents a class of SQL operations that normally
   * cause all later statements in a session using a proxy to be pinned to the same
   * underlying database connection. Including an item in the list exempts that class
   * of SQL operations from the pinning behavior. This setting is only supported for
   * MySQL engine family databases. Currently, the only allowed value is
   * <code>EXCLUDE_VARIABLE_SETS</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionPinningFilters() const { return m_sessionPinningFilters; }
  inline bool SessionPinningFiltersHasBeenSet() const { return m_sessionPinningFiltersHasBeenSet; }
  template <typename SessionPinningFiltersT = Aws::Vector<Aws::String>>
  void SetSessionPinningFilters(SessionPinningFiltersT&& value) {
    m_sessionPinningFiltersHasBeenSet = true;
    m_sessionPinningFilters = std::forward<SessionPinningFiltersT>(value);
  }
  template <typename SessionPinningFiltersT = Aws::Vector<Aws::String>>
  ConnectionPoolConfigurationInfo& WithSessionPinningFilters(SessionPinningFiltersT&& value) {
    SetSessionPinningFilters(std::forward<SessionPinningFiltersT>(value));
    return *this;
  }
  template <typename SessionPinningFiltersT = Aws::String>
  ConnectionPoolConfigurationInfo& AddSessionPinningFilters(SessionPinningFiltersT&& value) {
    m_sessionPinningFiltersHasBeenSet = true;
    m_sessionPinningFilters.emplace_back(std::forward<SessionPinningFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more SQL statements for the proxy to run when opening each new
   * database connection. The setting is typically used with <code>SET</code>
   * statements to make sure that each connection has identical settings. The query
   * added here must be valid. For including multiple variables in a single SET
   * statement, use a comma separator. This is an optional field.</p> <p>For example:
   * <code>SET variable1=value1, variable2=value2</code> </p>  <p>Since
   * you can access initialization query as part of target group configuration, it is
   * not protected by authentication or cryptographic methods. Anyone with access to
   * view or manage your proxy target group configuration can view the initialization
   * query. You should not add sensitive data, such as passwords or long-lived
   * encryption keys, to this option.</p>
   */
  inline const Aws::String& GetInitQuery() const { return m_initQuery; }
  inline bool InitQueryHasBeenSet() const { return m_initQueryHasBeenSet; }
  template <typename InitQueryT = Aws::String>
  void SetInitQuery(InitQueryT&& value) {
    m_initQueryHasBeenSet = true;
    m_initQuery = std::forward<InitQueryT>(value);
  }
  template <typename InitQueryT = Aws::String>
  ConnectionPoolConfigurationInfo& WithInitQuery(InitQueryT&& value) {
    SetInitQuery(std::forward<InitQueryT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxConnectionsPercent{0};
  bool m_maxConnectionsPercentHasBeenSet = false;

  int m_maxIdleConnectionsPercent{0};
  bool m_maxIdleConnectionsPercentHasBeenSet = false;

  int m_connectionBorrowTimeout{0};
  bool m_connectionBorrowTimeoutHasBeenSet = false;

  Aws::Vector<Aws::String> m_sessionPinningFilters;
  bool m_sessionPinningFiltersHasBeenSet = false;

  Aws::String m_initQuery;
  bool m_initQueryHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
