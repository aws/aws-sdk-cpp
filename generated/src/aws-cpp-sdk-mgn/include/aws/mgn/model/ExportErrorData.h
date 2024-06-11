/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Export errors data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ExportErrorData">AWS
   * API Reference</a></p>
   */
  class ExportErrorData
  {
  public:
    AWS_MGN_API ExportErrorData();
    AWS_MGN_API ExportErrorData(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ExportErrorData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Export errors data raw error.</p>
     */
    inline const Aws::String& GetRawError() const{ return m_rawError; }
    inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
    inline void SetRawError(const Aws::String& value) { m_rawErrorHasBeenSet = true; m_rawError = value; }
    inline void SetRawError(Aws::String&& value) { m_rawErrorHasBeenSet = true; m_rawError = std::move(value); }
    inline void SetRawError(const char* value) { m_rawErrorHasBeenSet = true; m_rawError.assign(value); }
    inline ExportErrorData& WithRawError(const Aws::String& value) { SetRawError(value); return *this;}
    inline ExportErrorData& WithRawError(Aws::String&& value) { SetRawError(std::move(value)); return *this;}
    inline ExportErrorData& WithRawError(const char* value) { SetRawError(value); return *this;}
    ///@}
  private:

    Aws::String m_rawError;
    bool m_rawErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
