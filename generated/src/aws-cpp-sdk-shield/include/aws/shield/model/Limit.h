/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Specifies how many protections of a given type you can create.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Limit">AWS API
   * Reference</a></p>
   */
  class Limit
  {
  public:
    AWS_SHIELD_API Limit();
    AWS_SHIELD_API Limit(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Limit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of protection.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of protection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline long long GetMax() const{ return m_max; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline void SetMax(long long value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline Limit& WithMax(long long value) { SetMax(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    long long m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
