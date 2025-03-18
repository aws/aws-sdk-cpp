/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the stack's conformity to its expected template
   * configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFormationStackDriftInformationDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudFormationStackDriftInformationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails() = default;
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline const Aws::String& GetStackDriftStatus() const { return m_stackDriftStatus; }
    inline bool StackDriftStatusHasBeenSet() const { return m_stackDriftStatusHasBeenSet; }
    template<typename StackDriftStatusT = Aws::String>
    void SetStackDriftStatus(StackDriftStatusT&& value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = std::forward<StackDriftStatusT>(value); }
    template<typename StackDriftStatusT = Aws::String>
    AwsCloudFormationStackDriftInformationDetails& WithStackDriftStatus(StackDriftStatusT&& value) { SetStackDriftStatus(std::forward<StackDriftStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackDriftStatus;
    bool m_stackDriftStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
