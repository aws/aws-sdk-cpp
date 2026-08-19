/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/LogDestinationType.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 * <p/><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DisableLoggingMessage">AWS
 * API Reference</a></p>
 */
class DisableLoggingRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API DisableLoggingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisableLogging"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The identifier of the cluster on which logging is to be stopped.</p>
   * <p>Example: <code>examplecluster</code> </p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  DisableLoggingRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log destination type. An enum with possible values of <code>s3</code>,
   * <code>cloudwatch</code>, and <code>s3table</code>. When set to
   * <code>s3table</code>, stops system table publishing. When omitted, the operation
   * disables audit logging.</p>
   */
  inline LogDestinationType GetLogDestinationType() const { return m_logDestinationType; }
  inline bool LogDestinationTypeHasBeenSet() const { return m_logDestinationTypeHasBeenSet; }
  inline void SetLogDestinationType(LogDestinationType value) {
    m_logDestinationTypeHasBeenSet = true;
    m_logDestinationType = value;
  }
  inline DisableLoggingRequest& WithLogDestinationType(LogDestinationType value) {
    SetLogDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The collection of log types to stop exporting. When
   * <code>LogDestinationType</code> is <code>s3table</code>, the values are the
   * names of the system tables to stop publishing. Omitting this parameter or
   * passing <code>all</code> stops publishing all system tables.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogExports() const { return m_logExports; }
  inline bool LogExportsHasBeenSet() const { return m_logExportsHasBeenSet; }
  template <typename LogExportsT = Aws::Vector<Aws::String>>
  void SetLogExports(LogExportsT&& value) {
    m_logExportsHasBeenSet = true;
    m_logExports = std::forward<LogExportsT>(value);
  }
  template <typename LogExportsT = Aws::Vector<Aws::String>>
  DisableLoggingRequest& WithLogExports(LogExportsT&& value) {
    SetLogExports(std::forward<LogExportsT>(value));
    return *this;
  }
  template <typename LogExportsT = Aws::String>
  DisableLoggingRequest& AddLogExports(LogExportsT&& value) {
    m_logExportsHasBeenSet = true;
    m_logExports.emplace_back(std::forward<LogExportsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  LogDestinationType m_logDestinationType{LogDestinationType::NOT_SET};

  Aws::Vector<Aws::String> m_logExports;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_logDestinationTypeHasBeenSet = false;
  bool m_logExportsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
