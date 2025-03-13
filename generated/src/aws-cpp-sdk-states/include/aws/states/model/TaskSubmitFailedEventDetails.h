/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about a task that failed to submit during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskSubmitFailedEventDetails">AWS
   * API Reference</a></p>
   */
  class TaskSubmitFailedEventDetails
  {
  public:
    AWS_SFN_API TaskSubmitFailedEventDetails() = default;
    AWS_SFN_API TaskSubmitFailedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskSubmitFailedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    TaskSubmitFailedEventDetails& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    TaskSubmitFailedEventDetails& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    TaskSubmitFailedEventDetails& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    TaskSubmitFailedEventDetails& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
