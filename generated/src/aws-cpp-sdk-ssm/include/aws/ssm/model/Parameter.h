/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParameterType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An Amazon Web Services Systems Manager parameter in Parameter
   * Store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Parameter">AWS API
   * Reference</a></p>
   */
  class Parameter
  {
  public:
    AWS_SSM_API Parameter() = default;
    AWS_SSM_API Parameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Parameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Parameter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of parameter. Valid values include the following:
     * <code>String</code>, <code>StringList</code>, and <code>SecureString</code>.</p>
     *  <p>If type is <code>StringList</code>, the system returns a
     * comma-separated string with no spaces between commas in the <code>Value</code>
     * field.</p> 
     */
    inline ParameterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ParameterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Parameter& WithType(ParameterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter value.</p>  <p>If type is <code>StringList</code>, the
     * system returns a comma-separated string with no spaces between commas in the
     * <code>Value</code> field.</p> 
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Parameter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter version.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline Parameter& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either the version number or the label used to retrieve the parameter value.
     * Specify selectors by using one of the following formats:</p>
     * <p>parameter_name:version</p> <p>parameter_name:label</p>
     */
    inline const Aws::String& GetSelector() const { return m_selector; }
    inline bool SelectorHasBeenSet() const { return m_selectorHasBeenSet; }
    template<typename SelectorT = Aws::String>
    void SetSelector(SelectorT&& value) { m_selectorHasBeenSet = true; m_selector = std::forward<SelectorT>(value); }
    template<typename SelectorT = Aws::String>
    Parameter& WithSelector(SelectorT&& value) { SetSelector(std::forward<SelectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to parameters that reference information in other Amazon Web Services
     * services. <code>SourceResult</code> is the raw result or response from the
     * source.</p>
     */
    inline const Aws::String& GetSourceResult() const { return m_sourceResult; }
    inline bool SourceResultHasBeenSet() const { return m_sourceResultHasBeenSet; }
    template<typename SourceResultT = Aws::String>
    void SetSourceResult(SourceResultT&& value) { m_sourceResultHasBeenSet = true; m_sourceResult = std::forward<SourceResultT>(value); }
    template<typename SourceResultT = Aws::String>
    Parameter& WithSourceResult(SourceResultT&& value) { SetSourceResult(std::forward<SourceResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date the parameter was last changed or updated and the parameter version was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    Parameter& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the parameter.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    Parameter& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the parameter, such as <code>text</code> or
     * <code>aws:ec2:image</code>. The default is <code>text</code>.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    Parameter& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParameterType m_type{ParameterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::String m_selector;
    bool m_selectorHasBeenSet = false;

    Aws::String m_sourceResult;
    bool m_sourceResultHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
