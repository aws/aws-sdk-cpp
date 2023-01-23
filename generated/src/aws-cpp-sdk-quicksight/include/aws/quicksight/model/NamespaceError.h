/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NamespaceErrorType.h>
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
   * <p>Errors that occur during namespace creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamespaceError">AWS
   * API Reference</a></p>
   */
  class NamespaceError
  {
  public:
    AWS_QUICKSIGHT_API NamespaceError();
    AWS_QUICKSIGHT_API NamespaceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamespaceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error type.</p>
     */
    inline const NamespaceErrorType& GetType() const{ return m_type; }

    /**
     * <p>The error type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The error type.</p>
     */
    inline void SetType(const NamespaceErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The error type.</p>
     */
    inline void SetType(NamespaceErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The error type.</p>
     */
    inline NamespaceError& WithType(const NamespaceErrorType& value) { SetType(value); return *this;}

    /**
     * <p>The error type.</p>
     */
    inline NamespaceError& WithType(NamespaceErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The message for the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message for the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message for the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message for the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message for the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message for the error.</p>
     */
    inline NamespaceError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message for the error.</p>
     */
    inline NamespaceError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message for the error.</p>
     */
    inline NamespaceError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    NamespaceErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
