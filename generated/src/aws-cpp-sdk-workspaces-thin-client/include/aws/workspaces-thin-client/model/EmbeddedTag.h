/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{

  /**
   * <p>The resource and internal ID of a resource to tag.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-thin-client-2023-08-22/EmbeddedTag">AWS
   * API Reference</a></p>
   */
  class EmbeddedTag
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API EmbeddedTag();
    AWS_WORKSPACESTHINCLIENT_API EmbeddedTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API EmbeddedTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESTHINCLIENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline EmbeddedTag& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline EmbeddedTag& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a resource to tag.</p>
     */
    inline EmbeddedTag& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline const Aws::String& GetInternalId() const{ return m_internalId; }

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline bool InternalIdHasBeenSet() const { return m_internalIdHasBeenSet; }

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline void SetInternalId(const Aws::String& value) { m_internalIdHasBeenSet = true; m_internalId = value; }

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline void SetInternalId(Aws::String&& value) { m_internalIdHasBeenSet = true; m_internalId = std::move(value); }

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline void SetInternalId(const char* value) { m_internalIdHasBeenSet = true; m_internalId.assign(value); }

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline EmbeddedTag& WithInternalId(const Aws::String& value) { SetInternalId(value); return *this;}

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline EmbeddedTag& WithInternalId(Aws::String&& value) { SetInternalId(std::move(value)); return *this;}

    /**
     * <p>The internal ID of a resource to tag.</p>
     */
    inline EmbeddedTag& WithInternalId(const char* value) { SetInternalId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_internalId;
    bool m_internalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
