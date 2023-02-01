/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Boolean filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BooleanFilter">AWS
   * API Reference</a></p>
   */
  class BooleanFilter
  {
  public:
    AWS_SECURITYHUB_API BooleanFilter();
    AWS_SECURITYHUB_API BooleanFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API BooleanFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the boolean.</p>
     */
    inline bool GetValue() const{ return m_value; }

    /**
     * <p>The value of the boolean.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the boolean.</p>
     */
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the boolean.</p>
     */
    inline BooleanFilter& WithValue(bool value) { SetValue(value); return *this;}

  private:

    bool m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
