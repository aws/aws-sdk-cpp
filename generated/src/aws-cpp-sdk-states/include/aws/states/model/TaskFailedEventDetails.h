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
   * <p>Contains details about a task failure event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskFailedEventDetails">AWS
   * API Reference</a></p>
   */
  class TaskFailedEventDetails
  {
  public:
    AWS_SFN_API TaskFailedEventDetails();
    AWS_SFN_API TaskFailedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskFailedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TaskFailedEventDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline TaskFailedEventDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline TaskFailedEventDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}
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
    inline TaskFailedEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline TaskFailedEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline TaskFailedEventDetails& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline TaskFailedEventDetails& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline TaskFailedEventDetails& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline TaskFailedEventDetails& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline TaskFailedEventDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline TaskFailedEventDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline TaskFailedEventDetails& WithCause(const char* value) { SetCause(value); return *this;}
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
