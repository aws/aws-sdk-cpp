﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ComputeMode.h>
#include <aws/timestream-query/model/ProvisionedCapacityResponse.h>
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
   * <p>The response to a request to retrieve or update the compute capacity settings
   * for querying data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryComputeResponse">AWS
   * API Reference</a></p>
   */
  class QueryComputeResponse
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryComputeResponse();
    AWS_TIMESTREAMQUERY_API QueryComputeResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryComputeResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The mode in which Timestream Compute Units (TCUs) are allocated and utilized
     * within an account. Note that in the Asia Pacific (Mumbai) region, the API
     * operation only recognizes the value <code>PROVISIONED</code>.</p>
     */
    inline const ComputeMode& GetComputeMode() const{ return m_computeMode; }
    inline bool ComputeModeHasBeenSet() const { return m_computeModeHasBeenSet; }
    inline void SetComputeMode(const ComputeMode& value) { m_computeModeHasBeenSet = true; m_computeMode = value; }
    inline void SetComputeMode(ComputeMode&& value) { m_computeModeHasBeenSet = true; m_computeMode = std::move(value); }
    inline QueryComputeResponse& WithComputeMode(const ComputeMode& value) { SetComputeMode(value); return *this;}
    inline QueryComputeResponse& WithComputeMode(ComputeMode&& value) { SetComputeMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration object that contains settings for provisioned Timestream
     * Compute Units (TCUs) in your account.</p>
     */
    inline const ProvisionedCapacityResponse& GetProvisionedCapacity() const{ return m_provisionedCapacity; }
    inline bool ProvisionedCapacityHasBeenSet() const { return m_provisionedCapacityHasBeenSet; }
    inline void SetProvisionedCapacity(const ProvisionedCapacityResponse& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = value; }
    inline void SetProvisionedCapacity(ProvisionedCapacityResponse&& value) { m_provisionedCapacityHasBeenSet = true; m_provisionedCapacity = std::move(value); }
    inline QueryComputeResponse& WithProvisionedCapacity(const ProvisionedCapacityResponse& value) { SetProvisionedCapacity(value); return *this;}
    inline QueryComputeResponse& WithProvisionedCapacity(ProvisionedCapacityResponse&& value) { SetProvisionedCapacity(std::move(value)); return *this;}
    ///@}
  private:

    ComputeMode m_computeMode;
    bool m_computeModeHasBeenSet = false;

    ProvisionedCapacityResponse m_provisionedCapacity;
    bool m_provisionedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
