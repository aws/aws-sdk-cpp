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
   * <p>Provides details about assigned variables in an execution history
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/AssignedVariablesDetails">AWS
   * API Reference</a></p>
   */
  class AssignedVariablesDetails
  {
  public:
    AWS_SFN_API AssignedVariablesDetails() = default;
    AWS_SFN_API AssignedVariablesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API AssignedVariablesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether assigned variables were truncated in the response. Always
     * <code>false</code> for API calls. In CloudWatch logs, the value will be true if
     * the data is truncated due to size limits.</p>
     */
    inline bool GetTruncated() const { return m_truncated; }
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }
    inline AssignedVariablesDetails& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}
  private:

    bool m_truncated{false};
    bool m_truncatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
