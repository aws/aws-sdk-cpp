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
   * <p>Describes a resource relationship.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Relationship">AWS
   * API Reference</a></p>
   */
  class Relationship
  {
  public:
    AWS_NETWORKMANAGER_API Relationship();
    AWS_NETWORKMANAGER_API Relationship(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Relationship& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithTo(const Aws::String& value) { SetTo(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline Relationship& WithTo(const char* value) { SetTo(value); return *this;}

  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
