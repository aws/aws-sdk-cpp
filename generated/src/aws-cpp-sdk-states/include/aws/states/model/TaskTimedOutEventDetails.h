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
   * <p>Contains details about a resource timeout that occurred during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskTimedOutEventDetails">AWS
   * API Reference</a></p>
   */
  class TaskTimedOutEventDetails
  {
  public:
    AWS_SFN_API TaskTimedOutEventDetails();
    AWS_SFN_API TaskTimedOutEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskTimedOutEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskTimedOutEventDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline TaskTimedOutEventDetails& WithCause(const char* value) { SetCause(value); return *this;}

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
