/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains details about an organizational unit (OU). An OU is a container of
   * Amazon Web Services accounts within a root of an organization. Policies that are
   * attached to an OU apply to all accounts contained in that OU and in any child
   * OUs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/OrganizationalUnit">AWS
   * API Reference</a></p>
   */
  class OrganizationalUnit
  {
  public:
    AWS_ORGANIZATIONS_API OrganizationalUnit();
    AWS_ORGANIZATIONS_API OrganizationalUnit(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API OrganizationalUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline OrganizationalUnit& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline OrganizationalUnit& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) associated with this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organizational
     * unit ID string requires "ou-" followed by from 4 to 32 lowercase letters or
     * digits (the ID of the root that contains the OU). This string is followed by a
     * second "-" dash and from 8 to 32 additional lowercase letters or digits.</p>
     */
    inline OrganizationalUnit& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline OrganizationalUnit& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline OrganizationalUnit& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this OU.</p> <p>For more information about
     * ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline OrganizationalUnit& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline OrganizationalUnit& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline OrganizationalUnit& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of this OU.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline OrganizationalUnit& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
