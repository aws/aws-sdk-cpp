/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/opensearch/model/OptionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The cluster configuration status for a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ClusterConfigStatus">AWS
   * API Reference</a></p>
   */
  class ClusterConfigStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API ClusterConfigStatus();
    AWS_OPENSEARCHSERVICE_API ClusterConfigStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ClusterConfigStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Cluster configuration options for the specified domain.</p>
     */
    inline const ClusterConfig& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const ClusterConfig& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(ClusterConfig&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline ClusterConfigStatus& WithOptions(const ClusterConfig& value) { SetOptions(value); return *this;}
    inline ClusterConfigStatus& WithOptions(ClusterConfig&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of cluster configuration options for the specified domain.</p>
     */
    inline const OptionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterConfigStatus& WithStatus(const OptionStatus& value) { SetStatus(value); return *this;}
    inline ClusterConfigStatus& WithStatus(OptionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    ClusterConfig m_options;
    bool m_optionsHasBeenSet = false;

    OptionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
