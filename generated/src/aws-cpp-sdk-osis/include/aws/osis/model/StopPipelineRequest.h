﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/OSISRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OSIS
{
namespace Model
{

  /**
   */
  class StopPipelineRequest : public OSISRequest
  {
  public:
    AWS_OSIS_API StopPipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopPipeline"; }

    AWS_OSIS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the pipeline to stop.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline StopPipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline StopPipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline StopPipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
