/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/PolicyTypeSummary.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains details about a root. A root is a top-level parent node in the
   * hierarchy of an organization that can contain organizational units (OUs) and
   * accounts. The root contains every Amazon Web Services account in the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Root">AWS
   * API Reference</a></p>
   */
  class Root
  {
  public:
    AWS_ORGANIZATIONS_API Root();
    AWS_ORGANIZATIONS_API Root(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Root& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) for the root. The ID is unique to the organization
     * only.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for
     * a root ID string requires "r-" followed by from 4 to 32 lowercase letters or
     * digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Root& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Root& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Root& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the root.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Root& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Root& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Root& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the root.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Root& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Root& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Root& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of policies that are currently enabled for the root and therefore
     * can be attached to the root or to its OUs or accounts.</p>  <p>Even if a
     * policy type is shown as available in the organization, you can separately enable
     * and disable them at the root level by using <a>EnablePolicyType</a> and
     * <a>DisablePolicyType</a>. Use <a>DescribeOrganization</a> to see the
     * availability of the policy types in that organization.</p> 
     */
    inline const Aws::Vector<PolicyTypeSummary>& GetPolicyTypes() const{ return m_policyTypes; }
    inline bool PolicyTypesHasBeenSet() const { return m_policyTypesHasBeenSet; }
    inline void SetPolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { m_policyTypesHasBeenSet = true; m_policyTypes = value; }
    inline void SetPolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { m_policyTypesHasBeenSet = true; m_policyTypes = std::move(value); }
    inline Root& WithPolicyTypes(const Aws::Vector<PolicyTypeSummary>& value) { SetPolicyTypes(value); return *this;}
    inline Root& WithPolicyTypes(Aws::Vector<PolicyTypeSummary>&& value) { SetPolicyTypes(std::move(value)); return *this;}
    inline Root& AddPolicyTypes(const PolicyTypeSummary& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }
    inline Root& AddPolicyTypes(PolicyTypeSummary&& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PolicyTypeSummary> m_policyTypes;
    bool m_policyTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
