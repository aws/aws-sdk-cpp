/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/OptionGroup.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class CreateOptionGroupResult
  {
  public:
    AWS_RDS_API CreateOptionGroupResult();
    AWS_RDS_API CreateOptionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateOptionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const OptionGroup& GetOptionGroup() const{ return m_optionGroup; }

    
    inline void SetOptionGroup(const OptionGroup& value) { m_optionGroup = value; }

    
    inline void SetOptionGroup(OptionGroup&& value) { m_optionGroup = std::move(value); }

    
    inline CreateOptionGroupResult& WithOptionGroup(const OptionGroup& value) { SetOptionGroup(value); return *this;}

    
    inline CreateOptionGroupResult& WithOptionGroup(OptionGroup&& value) { SetOptionGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateOptionGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateOptionGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    OptionGroup m_optionGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
