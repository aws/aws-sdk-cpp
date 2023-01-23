/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>The value used for mapping a specified attribute to an identity source. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/attributemappingsconcept.html">Attribute
   * mappings</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AccessControlAttributeValue">AWS
   * API Reference</a></p>
   */
  class AccessControlAttributeValue
  {
  public:
    AWS_SSOADMIN_API AccessControlAttributeValue();
    AWS_SSOADMIN_API AccessControlAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AccessControlAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSource() const{ return m_source; }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline void SetSource(const Aws::Vector<Aws::String>& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline void SetSource(Aws::Vector<Aws::String>&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline AccessControlAttributeValue& WithSource(const Aws::Vector<Aws::String>& value) { SetSource(value); return *this;}

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline AccessControlAttributeValue& WithSource(Aws::Vector<Aws::String>&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline AccessControlAttributeValue& AddSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source.push_back(value); return *this; }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline AccessControlAttributeValue& AddSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source.push_back(std::move(value)); return *this; }

    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline AccessControlAttributeValue& AddSource(const char* value) { m_sourceHasBeenSet = true; m_source.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
