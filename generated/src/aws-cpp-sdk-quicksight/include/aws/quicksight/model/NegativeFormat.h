/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a negative format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NegativeFormat">AWS
   * API Reference</a></p>
   */
  class NegativeFormat
  {
  public:
    AWS_QUICKSIGHT_API NegativeFormat();
    AWS_QUICKSIGHT_API NegativeFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NegativeFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The prefix for a negative format.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline NegativeFormat& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline NegativeFormat& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for a negative format.</p>
     */
    inline NegativeFormat& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The suffix for a negative format.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline NegativeFormat& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline NegativeFormat& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}

    /**
     * <p>The suffix for a negative format.</p>
     */
    inline NegativeFormat& WithSuffix(const char* value) { SetSuffix(value); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
