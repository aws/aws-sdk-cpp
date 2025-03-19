/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSourceErrorInfoType.h>
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
   * <p>Error information for the data source creation or update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSourceErrorInfo">AWS
   * API Reference</a></p>
   */
  class DataSourceErrorInfo
  {
  public:
    AWS_QUICKSIGHT_API DataSourceErrorInfo() = default;
    AWS_QUICKSIGHT_API DataSourceErrorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSourceErrorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Error type.</p>
     */
    inline DataSourceErrorInfoType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceErrorInfoType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSourceErrorInfo& WithType(DataSourceErrorInfoType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DataSourceErrorInfo& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    DataSourceErrorInfoType m_type{DataSourceErrorInfoType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
