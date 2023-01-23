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
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails();
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackDriftInformationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline const Aws::String& GetStackDriftStatus() const{ return m_stackDriftStatus; }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline bool StackDriftStatusHasBeenSet() const { return m_stackDriftStatusHasBeenSet; }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline void SetStackDriftStatus(const Aws::String& value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = value; }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline void SetStackDriftStatus(Aws::String&& value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = std::move(value); }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline void SetStackDriftStatus(const char* value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus.assign(value); }

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline AwsCloudFormationStackDriftInformationDetails& WithStackDriftStatus(const Aws::String& value) { SetStackDriftStatus(value); return *this;}

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline AwsCloudFormationStackDriftInformationDetails& WithStackDriftStatus(Aws::String&& value) { SetStackDriftStatus(std::move(value)); return *this;}

    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration. </p>
     */
    inline AwsCloudFormationStackDriftInformationDetails& WithStackDriftStatus(const char* value) { SetStackDriftStatus(value); return *this;}

  private:

    Aws::String m_stackDriftStatus;
    bool m_stackDriftStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
