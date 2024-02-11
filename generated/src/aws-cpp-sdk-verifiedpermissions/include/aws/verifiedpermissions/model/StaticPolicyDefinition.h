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
   * <p>Contains information about a static policy.</p> <p>This data type is used as
   * a field that is part of the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_PolicyDefinitionDetail.html">PolicyDefinitionDetail</a>
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/StaticPolicyDefinition">AWS
   * API Reference</a></p>
   */
  class StaticPolicyDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinition();
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API StaticPolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the static policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the static policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the static policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the static policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the static policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the static policy.</p>
     */
    inline StaticPolicyDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the static policy.</p>
     */
    inline StaticPolicyDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the static policy.</p>
     */
    inline StaticPolicyDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline void SetStatement(const char* value) { m_statementHasBeenSet = true; m_statement.assign(value); }

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline StaticPolicyDefinition& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline StaticPolicyDefinition& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The policy content of the static policy, written in the Cedar policy
     * language.</p>
     */
    inline StaticPolicyDefinition& WithStatement(const char* value) { SetStatement(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
