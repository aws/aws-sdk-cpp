/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/PolicyType.h>
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
   * <p>Contains information about a policy, but does not include the content. To see
   * the content of a policy, see <a>DescribePolicy</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/PolicySummary">AWS
   * API Reference</a></p>
   */
  class PolicySummary
  {
  public:
    AWS_ORGANIZATIONS_API PolicySummary();
    AWS_ORGANIZATIONS_API PolicySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API PolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a policy ID string
     * requires "p-" followed by from 8 to 128 lowercase or uppercase letters, digits,
     * or the underscore character (_).</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PolicySummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PolicySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PolicySummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PolicySummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PolicySummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PolicySummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the policy.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PolicySummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PolicySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PolicySummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy.</p>
     */
    inline const PolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PolicySummary& WithType(const PolicyType& value) { SetType(value); return *this;}
    inline PolicySummary& WithType(PolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates whether the specified policy is an Amazon Web
     * Services managed policy. If true, then you can attach the policy to roots, OUs,
     * or accounts, but you cannot edit it.</p>
     */
    inline bool GetAwsManaged() const{ return m_awsManaged; }
    inline bool AwsManagedHasBeenSet() const { return m_awsManagedHasBeenSet; }
    inline void SetAwsManaged(bool value) { m_awsManagedHasBeenSet = true; m_awsManaged = value; }
    inline PolicySummary& WithAwsManaged(bool value) { SetAwsManaged(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PolicyType m_type;
    bool m_typeHasBeenSet = false;

    bool m_awsManaged;
    bool m_awsManagedHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
