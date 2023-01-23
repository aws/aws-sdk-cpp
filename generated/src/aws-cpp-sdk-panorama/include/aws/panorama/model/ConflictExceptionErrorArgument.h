/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A conflict exception error argument.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ConflictExceptionErrorArgument">AWS
   * API Reference</a></p>
   */
  class ConflictExceptionErrorArgument
  {
  public:
    AWS_PANORAMA_API ConflictExceptionErrorArgument();
    AWS_PANORAMA_API ConflictExceptionErrorArgument(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ConflictExceptionErrorArgument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error argument's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The error argument's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The error argument's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The error argument's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The error argument's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The error argument's name.</p>
     */
    inline ConflictExceptionErrorArgument& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The error argument's name.</p>
     */
    inline ConflictExceptionErrorArgument& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The error argument's name.</p>
     */
    inline ConflictExceptionErrorArgument& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The error argument's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The error argument's value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The error argument's value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The error argument's value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The error argument's value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The error argument's value.</p>
     */
    inline ConflictExceptionErrorArgument& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The error argument's value.</p>
     */
    inline ConflictExceptionErrorArgument& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The error argument's value.</p>
     */
    inline ConflictExceptionErrorArgument& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
