/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
namespace SFN
{
namespace Model
{

  /**
   * <p>Provides details about input or output in an execution history
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/HistoryEventExecutionDataDetails">AWS
   * API Reference</a></p>
   */
  class HistoryEventExecutionDataDetails
  {
  public:
    AWS_SFN_API HistoryEventExecutionDataDetails();
    AWS_SFN_API HistoryEventExecutionDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API HistoryEventExecutionDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether input or output was truncated in the response. Always
     * <code>false</code> for API calls.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>Indicates whether input or output was truncated in the response. Always
     * <code>false</code> for API calls.</p>
     */
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }

    /**
     * <p>Indicates whether input or output was truncated in the response. Always
     * <code>false</code> for API calls.</p>
     */
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }

    /**
     * <p>Indicates whether input or output was truncated in the response. Always
     * <code>false</code> for API calls.</p>
     */
    inline HistoryEventExecutionDataDetails& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:

    bool m_truncated;
    bool m_truncatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
