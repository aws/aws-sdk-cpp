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
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext();
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Attributes of the session that the key was used for.</p>
     */
    inline const AwsIamAccessKeySessionContextAttributes& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const AwsIamAccessKeySessionContextAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(AwsIamAccessKeySessionContextAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AwsIamAccessKeySessionContext& WithAttributes(const AwsIamAccessKeySessionContextAttributes& value) { SetAttributes(value); return *this;}
    inline AwsIamAccessKeySessionContext& WithAttributes(AwsIamAccessKeySessionContextAttributes&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the entity that created the session.</p>
     */
    inline const AwsIamAccessKeySessionContextSessionIssuer& GetSessionIssuer() const{ return m_sessionIssuer; }
    inline bool SessionIssuerHasBeenSet() const { return m_sessionIssuerHasBeenSet; }
    inline void SetSessionIssuer(const AwsIamAccessKeySessionContextSessionIssuer& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = value; }
    inline void SetSessionIssuer(AwsIamAccessKeySessionContextSessionIssuer&& value) { m_sessionIssuerHasBeenSet = true; m_sessionIssuer = std::move(value); }
    inline AwsIamAccessKeySessionContext& WithSessionIssuer(const AwsIamAccessKeySessionContextSessionIssuer& value) { SetSessionIssuer(value); return *this;}
    inline AwsIamAccessKeySessionContext& WithSessionIssuer(AwsIamAccessKeySessionContextSessionIssuer&& value) { SetSessionIssuer(std::move(value)); return *this;}
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
