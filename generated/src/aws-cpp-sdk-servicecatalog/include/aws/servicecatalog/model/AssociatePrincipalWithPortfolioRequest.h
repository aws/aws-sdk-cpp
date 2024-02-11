/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PrincipalType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AssociatePrincipalWithPortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API AssociatePrincipalWithPortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociatePrincipalWithPortfolio"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline const Aws::String& GetPrincipalARN() const{ return m_principalARN; }

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline void SetPrincipalARN(const Aws::String& value) { m_principalARNHasBeenSet = true; m_principalARN = value; }

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline void SetPrincipalARN(Aws::String&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::move(value); }

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline void SetPrincipalARN(const char* value) { m_principalARNHasBeenSet = true; m_principalARN.assign(value); }

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPrincipalARN(const Aws::String& value) { SetPrincipalARN(value); return *this;}

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPrincipalARN(Aws::String&& value) { SetPrincipalARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal (user, role, or group). If the
     * <code>PrincipalType</code> is <code>IAM</code>, the supported value is a fully
     * defined <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * Amazon Resource Name (ARN)</a>. If the <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>, the supported value is an <code>IAM</code> ARN
     * <i>without an AccountID</i> in the following format:</p> <p>
     * <i>arn:partition:iam:::resource-type/resource-id</i> </p> <p>The ARN resource-id
     * can be either:</p> <ul> <li> <p>A fully formed resource-id. For example,
     * <i>arn:aws:iam:::role/resource-name</i> or
     * <i>arn:aws:iam:::role/resource-path/resource-name</i> </p> </li> <li> <p>A
     * wildcard ARN. The wildcard ARN accepts <code>IAM_PATTERN</code> values with a
     * "*" or "?" in the resource-id segment of the ARN. For example
     * <i>arn:partition:service:::resource-type/resource-path/resource-name</i>. The
     * new symbols are exclusive to the <b>resource-path</b> and <b>resource-name</b>
     * and cannot replace the <b>resource-type</b> or other ARN values. </p> <p>The ARN
     * path and principal name allow unlimited wildcard characters.</p> </li> </ul>
     * <p>Examples of an <b>acceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::role/ResourceName_*</p> </li> <li>
     * <p>arn:aws:iam:::role/ * /ResourceName_?</p> </li> </ul> <p>Examples of an
     * <b>unacceptable</b> wildcard ARN:</p> <ul> <li>
     * <p>arn:aws:iam:::* /ResourceName</p> </li> </ul> <p>You can associate multiple
     * <code>IAM_PATTERN</code>s even if the account has no principal with that name.
     * </p> <p>The "?" wildcard character matches zero or one of any character. This is
     * similar to ".?" in regular regex context. The "*" wildcard character matches any
     * number of any characters. This is similar to ".*" in regular regex context.</p>
     * <p>In the IAM Principal ARN format
     * (<i>arn:partition:iam:::resource-type/resource-path/resource-name</i>), valid
     * resource-type values include <b>user/</b>, <b>group/</b>, or <b>role/</b>. The
     * "?" and "*" characters are allowed only after the resource-type in the
     * resource-id segment. You can use special characters anywhere within the
     * resource-id. </p> <p>The "*" character also matches the "/" character, allowing
     * paths to be formed <i>within</i> the resource-id. For example,
     * <i>arn:aws:iam:::role/<b>*</b>/ResourceName_?</i> matches both
     * <i>arn:aws:iam:::role/pathA/pathB/ResourceName_1</i> and
     * <i>arn:aws:iam:::role/pathA/ResourceName_1</i>. </p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPrincipalARN(const char* value) { SetPrincipalARN(value); return *this;}


    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The principal type. The supported value is <code>IAM</code> if you use a
     * fully defined Amazon Resource Name (ARN), or <code>IAM_PATTERN</code> if you use
     * an ARN with no <code>accountID</code>, with or without wildcard characters. </p>
     */
    inline AssociatePrincipalWithPortfolioRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_principalARN;
    bool m_principalARNHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
