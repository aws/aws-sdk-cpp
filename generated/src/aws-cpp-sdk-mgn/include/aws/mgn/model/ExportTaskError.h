/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ExportErrorData.h>
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
   * <p>Export task error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ExportTaskError">AWS
   * API Reference</a></p>
   */
  class ExportTaskError
  {
  public:
    AWS_MGN_API ExportTaskError();
    AWS_MGN_API ExportTaskError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ExportTaskError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Export task error data.</p>
     */
    inline const ExportErrorData& GetErrorData() const{ return m_errorData; }

    /**
     * <p>Export task error data.</p>
     */
    inline bool ErrorDataHasBeenSet() const { return m_errorDataHasBeenSet; }

    /**
     * <p>Export task error data.</p>
     */
    inline void SetErrorData(const ExportErrorData& value) { m_errorDataHasBeenSet = true; m_errorData = value; }

    /**
     * <p>Export task error data.</p>
     */
    inline void SetErrorData(ExportErrorData&& value) { m_errorDataHasBeenSet = true; m_errorData = std::move(value); }

    /**
     * <p>Export task error data.</p>
     */
    inline ExportTaskError& WithErrorData(const ExportErrorData& value) { SetErrorData(value); return *this;}

    /**
     * <p>Export task error data.</p>
     */
    inline ExportTaskError& WithErrorData(ExportErrorData&& value) { SetErrorData(std::move(value)); return *this;}


    /**
     * <p>Export task error datetime.</p>
     */
    inline const Aws::String& GetErrorDateTime() const{ return m_errorDateTime; }

    /**
     * <p>Export task error datetime.</p>
     */
    inline bool ErrorDateTimeHasBeenSet() const { return m_errorDateTimeHasBeenSet; }

    /**
     * <p>Export task error datetime.</p>
     */
    inline void SetErrorDateTime(const Aws::String& value) { m_errorDateTimeHasBeenSet = true; m_errorDateTime = value; }

    /**
     * <p>Export task error datetime.</p>
     */
    inline void SetErrorDateTime(Aws::String&& value) { m_errorDateTimeHasBeenSet = true; m_errorDateTime = std::move(value); }

    /**
     * <p>Export task error datetime.</p>
     */
    inline void SetErrorDateTime(const char* value) { m_errorDateTimeHasBeenSet = true; m_errorDateTime.assign(value); }

    /**
     * <p>Export task error datetime.</p>
     */
    inline ExportTaskError& WithErrorDateTime(const Aws::String& value) { SetErrorDateTime(value); return *this;}

    /**
     * <p>Export task error datetime.</p>
     */
    inline ExportTaskError& WithErrorDateTime(Aws::String&& value) { SetErrorDateTime(std::move(value)); return *this;}

    /**
     * <p>Export task error datetime.</p>
     */
    inline ExportTaskError& WithErrorDateTime(const char* value) { SetErrorDateTime(value); return *this;}

  private:

    ExportErrorData m_errorData;
    bool m_errorDataHasBeenSet = false;

    Aws::String m_errorDateTime;
    bool m_errorDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
