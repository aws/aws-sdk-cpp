/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A keyword filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/KeywordFilter">AWS
   * API Reference</a></p>
   */
  class KeywordFilter
  {
  public:
    AWS_SECURITYHUB_API KeywordFilter();
    AWS_SECURITYHUB_API KeywordFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API KeywordFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value for the keyword.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value for the keyword.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value for the keyword.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value for the keyword.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value for the keyword.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value for the keyword.</p>
     */
    inline KeywordFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value for the keyword.</p>
     */
    inline KeywordFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value for the keyword.</p>
     */
    inline KeywordFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
