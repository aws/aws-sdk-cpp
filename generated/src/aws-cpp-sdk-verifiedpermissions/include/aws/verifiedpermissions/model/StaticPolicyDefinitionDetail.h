/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>A structure that contains details about a static policy. It includes the
   * description and policy body.</p> <p>This data type is used within a <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_PolicyDefinition.html">PolicyDefinition</a>
   * structure as part of a request parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/StaticPolicyDefinitionDetail">AWS
   * API Reference</a></p>
   */
  class StaticPolicyDefinitionDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinitionDetail();
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinitionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinitionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the static policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the static policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the static policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the static policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the static policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the static policy.</p>
     */
    inline StaticPolicyDefinitionDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the static policy.</p>
     */
    inline StaticPolicyDefinitionDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the static policy.</p>
     */
    inline StaticPolicyDefinitionDetail& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline StaticPolicyDefinitionDetail& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline StaticPolicyDefinitionDetail& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The content of the static policy written in the Cedar policy language.</p>
     */
    inline StaticPolicyDefinitionDetail& WithStatement(const char* value) { SetStatement(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
