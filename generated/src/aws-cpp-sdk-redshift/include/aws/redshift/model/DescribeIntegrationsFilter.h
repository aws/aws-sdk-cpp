/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/DescribeIntegrationsFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>A set of elements to filter the returned integrations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeIntegrationsFilter">AWS
   * API Reference</a></p>
   */
  class DescribeIntegrationsFilter
  {
  public:
    AWS_REDSHIFT_API DescribeIntegrationsFilter();
    AWS_REDSHIFT_API DescribeIntegrationsFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DescribeIntegrationsFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies the type of integration filter.</p>
     */
    inline const DescribeIntegrationsFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const DescribeIntegrationsFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(DescribeIntegrationsFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline DescribeIntegrationsFilter& WithName(const DescribeIntegrationsFilterName& value) { SetName(value); return *this;}
    inline DescribeIntegrationsFilter& WithName(DescribeIntegrationsFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the values to filter on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline DescribeIntegrationsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline DescribeIntegrationsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline DescribeIntegrationsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline DescribeIntegrationsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline DescribeIntegrationsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    DescribeIntegrationsFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
