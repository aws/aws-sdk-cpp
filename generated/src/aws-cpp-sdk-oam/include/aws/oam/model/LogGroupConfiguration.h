﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>This structure contains the <code>Filter</code> parameter which you can use
   * to specify which log groups are to share log events from this source account to
   * the monitoring account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/LogGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class LogGroupConfiguration
  {
  public:
    AWS_OAM_API LogGroupConfiguration();
    AWS_OAM_API LogGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API LogGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this field to specify which log groups are to share their log events with
     * the monitoring account. Use the term <code>LogGroupName</code> and one or more
     * of the following operands. Use single quotation marks (') around log group
     * names. The matching of log group names is case sensitive. Each filter has a
     * limit of five conditional operands. Conditional operands are <code>AND</code>
     * and <code>OR</code>.</p> <ul> <li> <p> <code>=</code> and <code>!=</code> </p>
     * </li> <li> <p> <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li>
     * <li> <p> <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as
     * prefix searches. Include a <code>%</code> at the end of the string that you want
     * to search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>LogGroupName IN ('This-Log-Group', 'Other-Log-Group')</code>
     * includes only the log groups with names <code>This-Log-Group</code> and
     * <code>Other-Log-Group</code>.</p> </li> <li> <p> <code>LogGroupName NOT IN
     * ('Private-Log-Group', 'Private-Log-Group-2')</code> includes all log groups
     * except the log groups with names <code>Private-Log-Group</code> and
     * <code>Private-Log-Group-2</code>.</p> </li> <li> <p> <code>LogGroupName LIKE
     * 'aws/lambda/%' OR LogGroupName LIKE 'AWSLogs%'</code> includes all log groups
     * that have names that start with <code>aws/lambda/</code> or
     * <code>AWSLogs</code>.</p> </li> </ul>  <p>If you are updating a link that
     * uses filters, you can specify <code>*</code> as the only value for the
     * <code>filter</code> parameter to delete the filter and share all log groups with
     * the monitoring account.</p> 
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }
    inline LogGroupConfiguration& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}
    inline LogGroupConfiguration& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}
    inline LogGroupConfiguration& WithFilter(const char* value) { SetFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
