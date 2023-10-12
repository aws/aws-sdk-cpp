/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sdb/SimpleDBErrors.h>
#include <aws/sdb/model/MissingParameter.h>
#include <aws/sdb/model/NumberSubmittedItemsExceeded.h>
#include <aws/sdb/model/NumberDomainAttributesExceeded.h>
#include <aws/sdb/model/InvalidNumberPredicates.h>
#include <aws/sdb/model/InvalidParameterValue.h>
#include <aws/sdb/model/TooManyRequestedAttributes.h>
#include <aws/sdb/model/NoSuchDomain.h>
#include <aws/sdb/model/InvalidNumberValueTests.h>
#include <aws/sdb/model/NumberItemAttributesExceeded.h>
#include <aws/sdb/model/NumberDomainsExceeded.h>
#include <aws/sdb/model/InvalidQueryExpression.h>
#include <aws/sdb/model/DuplicateItemName.h>
#include <aws/sdb/model/InvalidNextToken.h>
#include <aws/sdb/model/AttributeDoesNotExist.h>
#include <aws/sdb/model/NumberDomainBytesExceeded.h>
#include <aws/sdb/model/NumberSubmittedAttributesExceeded.h>
#include <aws/sdb/model/RequestTimeout.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SimpleDB;
using namespace Aws::SimpleDB::Model;

namespace Aws
{
namespace SimpleDB
{
template<> AWS_SIMPLEDB_API MissingParameter SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::MISSING_PARAMETER);
  return MissingParameter(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberSubmittedItemsExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_SUBMITTED_ITEMS_EXCEEDED);
  return NumberSubmittedItemsExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberDomainAttributesExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED);
  return NumberDomainAttributesExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API InvalidNumberPredicates SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::INVALID_NUMBER_PREDICATES);
  return InvalidNumberPredicates(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API InvalidParameterValue SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::INVALID_PARAMETER_VALUE);
  return InvalidParameterValue(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API TooManyRequestedAttributes SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::TOO_MANY_REQUESTED_ATTRIBUTES);
  return TooManyRequestedAttributes(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NoSuchDomain SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NO_SUCH_DOMAIN);
  return NoSuchDomain(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API InvalidNumberValueTests SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::INVALID_NUMBER_VALUE_TESTS);
  return InvalidNumberValueTests(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberItemAttributesExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_ITEM_ATTRIBUTES_EXCEEDED);
  return NumberItemAttributesExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberDomainsExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_DOMAINS_EXCEEDED);
  return NumberDomainsExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API InvalidQueryExpression SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::INVALID_QUERY_EXPRESSION);
  return InvalidQueryExpression(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API DuplicateItemName SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::DUPLICATE_ITEM_NAME);
  return DuplicateItemName(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API InvalidNextToken SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::INVALID_NEXT_TOKEN);
  return InvalidNextToken(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API AttributeDoesNotExist SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::ATTRIBUTE_DOES_NOT_EXIST);
  return AttributeDoesNotExist(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberDomainBytesExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_DOMAIN_BYTES_EXCEEDED);
  return NumberDomainBytesExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API NumberSubmittedAttributesExceeded SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED);
  return NumberSubmittedAttributesExceeded(this->GetXmlPayload().GetRootElement());
}

template<> AWS_SIMPLEDB_API RequestTimeout SimpleDBError::GetModeledError()
{
  assert(this->GetErrorType() == SimpleDBErrors::REQUEST_TIMEOUT);
  return RequestTimeout(this->GetXmlPayload().GetRootElement());
}

namespace SimpleDBErrorMapper
{

static constexpr uint32_t NUMBER_SUBMITTED_ITEMS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberSubmittedItemsExceeded");
static constexpr uint32_t NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberDomainAttributesExceeded");
static constexpr uint32_t INVALID_NUMBER_PREDICATES_HASH = ConstExprHashingUtils::HashString("InvalidNumberPredicates");
static constexpr uint32_t TOO_MANY_REQUESTED_ATTRIBUTES_HASH = ConstExprHashingUtils::HashString("TooManyRequestedAttributes");
static constexpr uint32_t NO_SUCH_DOMAIN_HASH = ConstExprHashingUtils::HashString("NoSuchDomain");
static constexpr uint32_t INVALID_NUMBER_VALUE_TESTS_HASH = ConstExprHashingUtils::HashString("InvalidNumberValueTests");
static constexpr uint32_t NUMBER_ITEM_ATTRIBUTES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberItemAttributesExceeded");
static constexpr uint32_t NUMBER_DOMAINS_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberDomainsExceeded");
static constexpr uint32_t INVALID_QUERY_EXPRESSION_HASH = ConstExprHashingUtils::HashString("InvalidQueryExpression");
static constexpr uint32_t DUPLICATE_ITEM_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateItemName");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextToken");
static constexpr uint32_t ATTRIBUTE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("AttributeDoesNotExist");
static constexpr uint32_t NUMBER_DOMAIN_BYTES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberDomainBytesExceeded");
static constexpr uint32_t NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED_HASH = ConstExprHashingUtils::HashString("NumberSubmittedAttributesExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NUMBER_SUBMITTED_ITEMS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_SUBMITTED_ITEMS_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAIN_ATTRIBUTES_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NUMBER_PREDICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NUMBER_PREDICATES), false);
  }
  else if (hashCode == TOO_MANY_REQUESTED_ATTRIBUTES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::TOO_MANY_REQUESTED_ATTRIBUTES), false);
  }
  else if (hashCode == NO_SUCH_DOMAIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NO_SUCH_DOMAIN), false);
  }
  else if (hashCode == INVALID_NUMBER_VALUE_TESTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NUMBER_VALUE_TESTS), false);
  }
  else if (hashCode == NUMBER_ITEM_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_ITEM_ATTRIBUTES_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_DOMAINS_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAINS_EXCEEDED), false);
  }
  else if (hashCode == INVALID_QUERY_EXPRESSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_QUERY_EXPRESSION), false);
  }
  else if (hashCode == DUPLICATE_ITEM_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::DUPLICATE_ITEM_NAME), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == ATTRIBUTE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::ATTRIBUTE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == NUMBER_DOMAIN_BYTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_DOMAIN_BYTES_EXCEEDED), false);
  }
  else if (hashCode == NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SimpleDBErrors::NUMBER_SUBMITTED_ATTRIBUTES_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SimpleDBErrorMapper
} // namespace SimpleDB
} // namespace Aws
