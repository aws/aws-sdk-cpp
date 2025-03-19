/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ImportErrorData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ImportErrorType.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Import task error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportTaskError">AWS
   * API Reference</a></p>
   */
  class ImportTaskError
  {
  public:
    AWS_MGN_API ImportTaskError() = default;
    AWS_MGN_API ImportTaskError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ImportTaskError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Import task error data.</p>
     */
    inline const ImportErrorData& GetErrorData() const { return m_errorData; }
    inline bool ErrorDataHasBeenSet() const { return m_errorDataHasBeenSet; }
    template<typename ErrorDataT = ImportErrorData>
    void SetErrorData(ErrorDataT&& value) { m_errorDataHasBeenSet = true; m_errorData = std::forward<ErrorDataT>(value); }
    template<typename ErrorDataT = ImportErrorData>
    ImportTaskError& WithErrorData(ErrorDataT&& value) { SetErrorData(std::forward<ErrorDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task error datetime.</p>
     */
    inline const Aws::String& GetErrorDateTime() const { return m_errorDateTime; }
    inline bool ErrorDateTimeHasBeenSet() const { return m_errorDateTimeHasBeenSet; }
    template<typename ErrorDateTimeT = Aws::String>
    void SetErrorDateTime(ErrorDateTimeT&& value) { m_errorDateTimeHasBeenSet = true; m_errorDateTime = std::forward<ErrorDateTimeT>(value); }
    template<typename ErrorDateTimeT = Aws::String>
    ImportTaskError& WithErrorDateTime(ErrorDateTimeT&& value) { SetErrorDateTime(std::forward<ErrorDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import task error type.</p>
     */
    inline ImportErrorType GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(ImportErrorType value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline ImportTaskError& WithErrorType(ImportErrorType value) { SetErrorType(value); return *this;}
    ///@}
  private:

    ImportErrorData m_errorData;
    bool m_errorDataHasBeenSet = false;

    Aws::String m_errorDateTime;
    bool m_errorDateTimeHasBeenSet = false;

    ImportErrorType m_errorType{ImportErrorType::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
