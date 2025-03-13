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
   * <p> An array with one or more objects that includes a security control
   * (identified with <code>SecurityControlId</code>,
   * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
   * Resource Name (ARN) of a standard. The security control ID or ARN is the same
   * across standards. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationId">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationId
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationId() = default;
    AWS_SECURITYHUB_API StandardsControlAssociationId(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) of a security
     * control across standards. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    StandardsControlAssociationId& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of a standard. </p>
     */
    inline const Aws::String& GetStandardsArn() const { return m_standardsArn; }
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }
    template<typename StandardsArnT = Aws::String>
    void SetStandardsArn(StandardsArnT&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::forward<StandardsArnT>(value); }
    template<typename StandardsArnT = Aws::String>
    StandardsControlAssociationId& WithStandardsArn(StandardsArnT&& value) { SetStandardsArn(std::forward<StandardsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
