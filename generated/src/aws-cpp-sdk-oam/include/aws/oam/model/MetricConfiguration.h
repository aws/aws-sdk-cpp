/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>This structure contains the <code>Filter</code> parameter which you can use
   * to specify which metric namespaces are to be shared from this source account to
   * the monitoring account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/MetricConfiguration">AWS
   * API Reference</a></p>
   */
  class MetricConfiguration
  {
  public:
    AWS_OAM_API MetricConfiguration();
    AWS_OAM_API MetricConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API MetricConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline MetricConfiguration& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline MetricConfiguration& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>Use this field to specify which metrics are to be shared with the monitoring
     * account. Use the term <code>Namespace</code> and one or more of the following
     * operands. Use single quotation marks (') around namespace names. The matching of
     * namespace names is case sensitive. Each filter has a limit of five conditional
     * operands. Conditional operands are <code>AND</code> and <code>OR</code>.</p>
     * <ul> <li> <p> <code>=</code> and <code>!=</code> </p> </li> <li> <p>
     * <code>AND</code> </p> </li> <li> <p> <code>OR</code> </p> </li> <li> <p>
     * <code>LIKE</code> and <code>NOT LIKE</code>. These can be used only as prefix
     * searches. Include a <code>%</code> at the end of the string that you want to
     * search for and include.</p> </li> <li> <p> <code>IN</code> and <code>NOT
     * IN</code>, using parentheses <code>( )</code> </p> </li> </ul> <p>Examples:</p>
     * <ul> <li> <p> <code>Namespace NOT LIKE 'AWS/%'</code> includes only namespaces
     * that don't start with <code>AWS/</code>, such as custom namespaces.</p> </li>
     * <li> <p> <code>Namespace IN ('AWS/EC2', 'AWS/ELB', 'AWS/S3')</code> includes
     * only the metrics in the EC2, Elastic Load Balancing, and Amazon S3 namespaces.
     * </p> </li> <li> <p> <code>Namespace = 'AWS/EC2' OR Namespace NOT LIKE
     * 'AWS/%'</code> includes only the EC2 namespace and your custom namespaces.</p>
     * </li> </ul>  <p>If you are updating a link that uses filters, you can
     * specify <code>*</code> as the only value for the <code>filter</code> parameter
     * to delete the filter and share all metric namespaces with the monitoring
     * account.</p> 
     */
    inline MetricConfiguration& WithFilter(const char* value) { SetFilter(value); return *this;}

  private:

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
