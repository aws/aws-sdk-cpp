/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsIamAccessKeySessionContextAttributes.h>
#include <aws/securityhub/model/AwsIamAccessKeySessionContextSessionIssuer.h>
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
   * <p>Provides information about the session that the key was used
   * for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeySessionContext">AWS
   * API Reference</a></p>
   */
  class AwsIamAccessKeySessionContext
  {
  public:
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext() = default;
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Attributes of the session that the key was used for.</p>
     */
    inline const AwsIamAccessKeySessionContextAttributes& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = AwsIamAccessKeySessionContextAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = AwsIamAccessKeySessionContextAttributes>
    AwsIamAccessKeySessionContext& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the entity that created the session.</p>
     */
    inline const AwsIamAccessKeySessionContextSessionIssuer& GetSessionIssuer() const { return m_sessionIssuer; }
    inline bool SessionIssuerHasBeenSet() const { return m_sessionIssuerHasBeenSet; }
    template<typename SessionIssuerT = AwsIamAccessKeySessionContextSessionIssuer>
    void SetSessionIssuer(SessionIssuerT&& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = std::forward<SessionIssuerT>(value); }
    template<typename SessionIssuerT = AwsIamAccessKeySessionContextSessionIssuer>
    AwsIamAccessKeySessionContext& WithSessionIssuer(SessionIssuerT&& value) { SetSessionIssuer(std::forward<SessionIssuerT>(value)); return *this;}
    ///@}
  private:

    AwsIamAccessKeySessionContextAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    AwsIamAccessKeySessionContextSessionIssuer m_sessionIssuer;
    bool m_sessionIssuerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
