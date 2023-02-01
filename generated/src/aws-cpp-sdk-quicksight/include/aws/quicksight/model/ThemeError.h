/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ThemeErrorType.h>
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
   * <p>Theme error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeError">AWS
   * API Reference</a></p>
   */
  class ThemeError
  {
  public:
    AWS_QUICKSIGHT_API ThemeError();
    AWS_QUICKSIGHT_API ThemeError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThemeError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of error.</p>
     */
    inline const ThemeErrorType& GetType() const{ return m_type; }

    /**
     * <p>The type of error.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of error.</p>
     */
    inline void SetType(const ThemeErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of error.</p>
     */
    inline void SetType(ThemeErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of error.</p>
     */
    inline ThemeError& WithType(const ThemeErrorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of error.</p>
     */
    inline ThemeError& WithType(ThemeErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline ThemeError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ThemeError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ThemeError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ThemeErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
