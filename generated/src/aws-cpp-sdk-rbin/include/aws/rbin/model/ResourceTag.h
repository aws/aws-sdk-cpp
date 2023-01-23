/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>Information about the resource tags used to identify resources that are
   * retained by the retention rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ResourceTag">AWS
   * API Reference</a></p>
   */
  class ResourceTag
  {
  public:
    AWS_RECYCLEBIN_API ResourceTag();
    AWS_RECYCLEBIN_API ResourceTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API ResourceTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key.</p>
     */
    inline const Aws::String& GetResourceTagKey() const{ return m_resourceTagKey; }

    /**
     * <p>The tag key.</p>
     */
    inline bool ResourceTagKeyHasBeenSet() const { return m_resourceTagKeyHasBeenSet; }

    /**
     * <p>The tag key.</p>
     */
    inline void SetResourceTagKey(const Aws::String& value) { m_resourceTagKeyHasBeenSet = true; m_resourceTagKey = value; }

    /**
     * <p>The tag key.</p>
     */
    inline void SetResourceTagKey(Aws::String&& value) { m_resourceTagKeyHasBeenSet = true; m_resourceTagKey = std::move(value); }

    /**
     * <p>The tag key.</p>
     */
    inline void SetResourceTagKey(const char* value) { m_resourceTagKeyHasBeenSet = true; m_resourceTagKey.assign(value); }

    /**
     * <p>The tag key.</p>
     */
    inline ResourceTag& WithResourceTagKey(const Aws::String& value) { SetResourceTagKey(value); return *this;}

    /**
     * <p>The tag key.</p>
     */
    inline ResourceTag& WithResourceTagKey(Aws::String&& value) { SetResourceTagKey(std::move(value)); return *this;}

    /**
     * <p>The tag key.</p>
     */
    inline ResourceTag& WithResourceTagKey(const char* value) { SetResourceTagKey(value); return *this;}


    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetResourceTagValue() const{ return m_resourceTagValue; }

    /**
     * <p>The tag value.</p>
     */
    inline bool ResourceTagValueHasBeenSet() const { return m_resourceTagValueHasBeenSet; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetResourceTagValue(const Aws::String& value) { m_resourceTagValueHasBeenSet = true; m_resourceTagValue = value; }

    /**
     * <p>The tag value.</p>
     */
    inline void SetResourceTagValue(Aws::String&& value) { m_resourceTagValueHasBeenSet = true; m_resourceTagValue = std::move(value); }

    /**
     * <p>The tag value.</p>
     */
    inline void SetResourceTagValue(const char* value) { m_resourceTagValueHasBeenSet = true; m_resourceTagValue.assign(value); }

    /**
     * <p>The tag value.</p>
     */
    inline ResourceTag& WithResourceTagValue(const Aws::String& value) { SetResourceTagValue(value); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline ResourceTag& WithResourceTagValue(Aws::String&& value) { SetResourceTagValue(std::move(value)); return *this;}

    /**
     * <p>The tag value.</p>
     */
    inline ResourceTag& WithResourceTagValue(const char* value) { SetResourceTagValue(value); return *this;}

  private:

    Aws::String m_resourceTagKey;
    bool m_resourceTagKeyHasBeenSet = false;

    Aws::String m_resourceTagValue;
    bool m_resourceTagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
