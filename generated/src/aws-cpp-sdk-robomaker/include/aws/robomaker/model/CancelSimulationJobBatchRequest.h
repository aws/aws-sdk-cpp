﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class CancelSimulationJobBatchRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CancelSimulationJobBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSimulationJobBatch"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of the batch to cancel.</p>
     */
    inline const Aws::String& GetBatch() const{ return m_batch; }
    inline bool BatchHasBeenSet() const { return m_batchHasBeenSet; }
    inline void SetBatch(const Aws::String& value) { m_batchHasBeenSet = true; m_batch = value; }
    inline void SetBatch(Aws::String&& value) { m_batchHasBeenSet = true; m_batch = std::move(value); }
    inline void SetBatch(const char* value) { m_batchHasBeenSet = true; m_batch.assign(value); }
    inline CancelSimulationJobBatchRequest& WithBatch(const Aws::String& value) { SetBatch(value); return *this;}
    inline CancelSimulationJobBatchRequest& WithBatch(Aws::String&& value) { SetBatch(std::move(value)); return *this;}
    inline CancelSimulationJobBatchRequest& WithBatch(const char* value) { SetBatch(value); return *this;}
    ///@}
  private:

    Aws::String m_batch;
    bool m_batchHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
