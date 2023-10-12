/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/PollyErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Polly;

namespace Aws
{
namespace Polly
{
namespace PollyErrorMapper
{

static constexpr uint32_t SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH = ConstExprHashingUtils::HashString("SsmlMarksNotSupportedForTextTypeException");
static constexpr uint32_t LEXICON_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("LexiconNotFoundException");
static constexpr uint32_t INVALID_SNS_TOPIC_ARN_HASH = ConstExprHashingUtils::HashString("InvalidSnsTopicArnException");
static constexpr uint32_t MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH = ConstExprHashingUtils::HashString("MarksNotSupportedForFormatException");
static constexpr uint32_t TEXT_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("TextLengthExceededException");
static constexpr uint32_t ENGINE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("EngineNotSupportedException");
static constexpr uint32_t UNSUPPORTED_PLS_LANGUAGE_HASH = ConstExprHashingUtils::HashString("UnsupportedPlsLanguageException");
static constexpr uint32_t UNSUPPORTED_PLS_ALPHABET_HASH = ConstExprHashingUtils::HashString("UnsupportedPlsAlphabetException");
static constexpr uint32_t LANGUAGE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("LanguageNotSupportedException");
static constexpr uint32_t MAX_LEXICONS_NUMBER_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxLexiconsNumberExceededException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_S3_KEY_HASH = ConstExprHashingUtils::HashString("InvalidS3KeyException");
static constexpr uint32_t INVALID_TASK_ID_HASH = ConstExprHashingUtils::HashString("InvalidTaskIdException");
static constexpr uint32_t SERVICE_FAILURE_HASH = ConstExprHashingUtils::HashString("ServiceFailureException");
static constexpr uint32_t SYNTHESIS_TASK_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("SynthesisTaskNotFoundException");
static constexpr uint32_t INVALID_SAMPLE_RATE_HASH = ConstExprHashingUtils::HashString("InvalidSampleRateException");
static constexpr uint32_t INVALID_LEXICON_HASH = ConstExprHashingUtils::HashString("InvalidLexiconException");
static constexpr uint32_t INVALID_S3_BUCKET_HASH = ConstExprHashingUtils::HashString("InvalidS3BucketException");
static constexpr uint32_t LEXICON_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LexiconSizeExceededException");
static constexpr uint32_t MAX_LEXEME_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("MaxLexemeLengthExceededException");
static constexpr uint32_t INVALID_SSML_HASH = ConstExprHashingUtils::HashString("InvalidSsmlException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE), false);
  }
  else if (hashCode == LEXICON_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SNS_TOPIC_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SNS_TOPIC_ARN), false);
  }
  else if (hashCode == MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MARKS_NOT_SUPPORTED_FOR_FORMAT), false);
  }
  else if (hashCode == TEXT_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::TEXT_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == ENGINE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::ENGINE_NOT_SUPPORTED), false);
  }
  else if (hashCode == UNSUPPORTED_PLS_LANGUAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_LANGUAGE), false);
  }
  else if (hashCode == UNSUPPORTED_PLS_ALPHABET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_ALPHABET), false);
  }
  else if (hashCode == LANGUAGE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LANGUAGE_NOT_SUPPORTED), false);
  }
  else if (hashCode == MAX_LEXICONS_NUMBER_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXICONS_NUMBER_EXCEEDED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_S3_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_S3_KEY), false);
  }
  else if (hashCode == INVALID_TASK_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_TASK_ID), false);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SERVICE_FAILURE), false);
  }
  else if (hashCode == SYNTHESIS_TASK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SYNTHESIS_TASK_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_SAMPLE_RATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SAMPLE_RATE), false);
  }
  else if (hashCode == INVALID_LEXICON_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_LEXICON), false);
  }
  else if (hashCode == INVALID_S3_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_S3_BUCKET), false);
  }
  else if (hashCode == LEXICON_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_SIZE_EXCEEDED), false);
  }
  else if (hashCode == MAX_LEXEME_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXEME_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == INVALID_SSML_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SSML), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PollyErrorMapper
} // namespace Polly
} // namespace Aws
