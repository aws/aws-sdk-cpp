/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the successful completion of a task
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskSucceededEventDetails">AWS
   * API Reference</a></p>
   */
  class TaskSucceededEventDetails
  {
  public:
    AWS_SFN_API TaskSucceededEventDetails();
    AWS_SFN_API TaskSucceededEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskSucceededEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline TaskSucceededEventDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TaskSucceededEventDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TaskSucceededEventDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline TaskSucceededEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline TaskSucceededEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline TaskSucceededEventDetails& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full JSON response from a resource when a task has succeeded. This
     * response becomes the output of the related task. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }
    inline TaskSucceededEventDetails& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}
    inline TaskSucceededEventDetails& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}
    inline TaskSucceededEventDetails& WithOutput(const char* value) { SetOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the output of an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetOutputDetails() const{ return m_outputDetails; }
    inline bool OutputDetailsHasBeenSet() const { return m_outputDetailsHasBeenSet; }
    inline void SetOutputDetails(const HistoryEventExecutionDataDetails& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = value; }
    inline void SetOutputDetails(HistoryEventExecutionDataDetails&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::move(value); }
    inline TaskSucceededEventDetails& WithOutputDetails(const HistoryEventExecutionDataDetails& value) { SetOutputDetails(value); return *this;}
    inline TaskSucceededEventDetails& WithOutputDetails(HistoryEventExecutionDataDetails&& value) { SetOutputDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_outputDetails;
    bool m_outputDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
