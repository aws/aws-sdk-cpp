/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>The specified resource is not available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ResourceUnavailableException">AWS
   * API Reference</a></p>
   */
  class ResourceUnavailableException
  {
  public:
    AWS_WORKSPACES_API ResourceUnavailableException();
    AWS_WORKSPACES_API ResourceUnavailableException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ResourceUnavailableException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exception error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The exception error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The exception error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The exception error message.</p>
     */
    inline ResourceUnavailableException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The exception error message.</p>
     */
    inline ResourceUnavailableException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The exception error message.</p>
     */
    inline ResourceUnavailableException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline ResourceUnavailableException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline ResourceUnavailableException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource that is not available.</p>
     */
    inline ResourceUnavailableException& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
