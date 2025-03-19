/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ComputeMode.h>
#include <aws/timestream-query/model/ProvisionedCapacityRequest.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>A request to retrieve or update the compute capacity settings for querying
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryComputeRequest">AWS
   * API Reference</a></p>
   */
  class QueryComputeRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryComputeRequest() = default;
    AWS_TIMESTREAMQUERY_API QueryComputeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryComputeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode in which Timestream Compute Units (TCUs) are allocated and utilized
     * within an account. Note that in the Asia Pacific (Mumbai) region, the API
     * operation only recognizes the value <code>PROVISIONED</code>.</p>
     */
    inline ComputeMode GetComputeMode() const { return m_computeMode; }
    inline bool ComputeModeHasBeenSet() const { return m_computeModeHasBeenSet; }
    inline void SetComputeMode(ComputeMode value) { m_computeModeHasBeenSet = true; m_computeMode = value; }
    inline QueryComputeRequest& WithComputeMode(ComputeMode value) { SetComputeMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration object that contains settings for provisioned Timestream
     * Compute Units (TCUs) in your account.</p>
     */
    inline const ProvisionedCapacityRequest& GetProvisionedCapacity() const { return m_provisionedCapacity; }
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }
    template<typename ProvisionedCapacityT = ProvisionedCapacityRequest>
    void SetProvisionedCapacity(ProvisionedCapacityT&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::forward<ProvisionedCapacityT>(value); }
    template<typename ProvisionedCapacityT = ProvisionedCapacityRequest>
    QueryComputeRequest& WithProvisionedCapacity(ProvisionedCapacityT&& value) { SetProvisionedCapacity(std::forward<ProvisionedCapacityT>(value)); return *this;}
    ///@}
  private:

    ComputeMode m_computeMode{ComputeMode::NOT_SET};
    bool m_computeModeHasBeenSet = false;

    ProvisionedCapacityRequest m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
