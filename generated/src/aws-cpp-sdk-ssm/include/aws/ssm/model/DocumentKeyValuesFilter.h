/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>One or more filters. Use a filter to return a more specific list of
   * documents.</p> <p>For keys, you can specify one or more tags that have been
   * applied to a document. </p> <p>You can also use Amazon Web Services-provided
   * keys, some of which have specific allowed values. These keys and their
   * associated values are as follows:</p> <dl> <dt>DocumentType</dt> <dd> <ul> <li>
   * <p> <code>ApplicationConfiguration</code> </p> </li> <li> <p>
   * <code>ApplicationConfigurationSchema</code> </p> </li> <li> <p>
   * <code>Automation</code> </p> </li> <li> <p> <code>ChangeCalendar</code> </p>
   * </li> <li> <p> <code>Command</code> </p> </li> <li> <p> <code>Package</code>
   * </p> </li> <li> <p> <code>Policy</code> </p> </li> <li> <p> <code>Session</code>
   * </p> </li> </ul> </dd> <dt>Owner</dt> <dd> <p>Note that only one
   * <code>Owner</code> can be specified in a request. For example:
   * <code>Key=Owner,Values=Self</code>.</p> <ul> <li> <p> <code>Amazon</code> </p>
   * </li> <li> <p> <code>Private</code> </p> </li> <li> <p> <code>Public</code> </p>
   * </li> <li> <p> <code>Self</code> </p> </li> <li> <p> <code>ThirdParty</code>
   * </p> </li> </ul> </dd> <dt>PlatformTypes</dt> <dd> <ul> <li> <p>
   * <code>Linux</code> </p> </li> <li> <p> <code>Windows</code> </p> </li> </ul>
   * </dd> </dl> <p> <code>Name</code> is another Amazon Web Services-provided key.
   * If you use <code>Name</code> as a key, you can use a name prefix to return a
   * list of documents. For example, in the Amazon Web Services CLI, to return a list
   * of all documents that begin with <code>Te</code>, run the following command:</p>
   * <p> <code>aws ssm list-documents --filters Key=Name,Values=Te</code> </p> <p>You
   * can also use the <code>TargetType</code> Amazon Web Services-provided key. For a
   * list of valid resource type values that can be used with this key, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
   * Web Services resource and property types reference</a> in the <i>CloudFormation
   * User Guide</i>.</p> <p>If you specify more than two keys, only documents that
   * are identified by all the tags are returned in the results. If you specify more
   * than two values for a key, documents that are identified by any of the values
   * are returned in the results.</p> <p>To specify a custom key-value pair, use the
   * format <code>Key=tag:tagName,Values=valueName</code>.</p> <p>For example, if you
   * created a key called region and are using the Amazon Web Services CLI to call
   * the <code>list-documents</code> command: </p> <p> <code>aws ssm list-documents
   * --filters Key=tag:region,Values=east,west Key=Owner,Values=Self</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentKeyValuesFilter">AWS
   * API Reference</a></p>
   */
  class DocumentKeyValuesFilter
  {
  public:
    AWS_SSM_API DocumentKeyValuesFilter() = default;
    AWS_SSM_API DocumentKeyValuesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentKeyValuesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DocumentKeyValuesFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the filter key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    DocumentKeyValuesFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    DocumentKeyValuesFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
