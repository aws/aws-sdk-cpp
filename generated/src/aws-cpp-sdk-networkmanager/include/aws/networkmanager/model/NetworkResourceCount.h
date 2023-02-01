/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a resource count.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkResourceCount">AWS
   * API Reference</a></p>
   */
  class NetworkResourceCount
  {
  public:
    AWS_NETWORKMANAGER_API NetworkResourceCount();
    AWS_NETWORKMANAGER_API NetworkResourceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceCount& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceCount& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceCount& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The resource count.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The resource count.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The resource count.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The resource count.</p>
     */
    inline NetworkResourceCount& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
