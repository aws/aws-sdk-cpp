/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IngestionErrorType.h>
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
   * <p>Error information for the SPICE ingestion of a dataset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ErrorInfo">AWS
   * API Reference</a></p>
   */
  class ErrorInfo
  {
  public:
    AWS_QUICKSIGHT_API ErrorInfo();
    AWS_QUICKSIGHT_API ErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error type.</p>
     */
    inline const IngestionErrorType& GetType() const{ return m_type; }

    /**
     * <p>Error type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Error type.</p>
     */
    inline void SetType(const IngestionErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Error type.</p>
     */
    inline void SetType(IngestionErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Error type.</p>
     */
    inline ErrorInfo& WithType(const IngestionErrorType& value) { SetType(value); return *this;}

    /**
     * <p>Error type.</p>
     */
    inline ErrorInfo& WithType(IngestionErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Error message.</p>
     */
    inline ErrorInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline ErrorInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Error message.</p>
     */
    inline ErrorInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    IngestionErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
