/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The resource in a list of resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ResourcesListItem">AWS
   * API Reference</a></p>
   */
  class ResourcesListItem
  {
  public:
    AWS_APPREGISTRY_API ResourcesListItem();
    AWS_APPREGISTRY_API ResourcesListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourcesListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline ResourcesListItem& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline ResourcesListItem& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon resource name (ARN) of the resource. </p>
     */
    inline ResourcesListItem& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The message returned if the call fails. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline ResourcesListItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline ResourcesListItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The message returned if the call fails. </p>
     */
    inline ResourcesListItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p> The status of the list item. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the list item. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the list item. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the list item. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the list item. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status of the list item. </p>
     */
    inline ResourcesListItem& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the list item. </p>
     */
    inline ResourcesListItem& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the list item. </p>
     */
    inline ResourcesListItem& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline ResourcesListItem& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline ResourcesListItem& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p> Provides information about the AppRegistry resource type. </p>
     */
    inline ResourcesListItem& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
