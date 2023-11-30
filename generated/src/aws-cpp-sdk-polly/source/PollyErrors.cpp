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

static const int SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH = HashingUtils::HashString("SsmlMarksNotSupportedForTextTypeException");
static const int LEXICON_NOT_FOUND_HASH = HashingUtils::HashString("LexiconNotFoundException");
static const int INVALID_SNS_TOPIC_ARN_HASH = HashingUtils::HashString("InvalidSnsTopicArnException");
static const int MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH = HashingUtils::HashString("MarksNotSupportedForFormatException");
static const int TEXT_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("TextLengthExceededException");
static const int ENGINE_NOT_SUPPORTED_HASH = HashingUtils::HashString("EngineNotSupportedException");
static const int UNSUPPORTED_PLS_LANGUAGE_HASH = HashingUtils::HashString("UnsupportedPlsLanguageException");
static const int UNSUPPORTED_PLS_ALPHABET_HASH = HashingUtils::HashString("UnsupportedPlsAlphabetException");
static const int LANGUAGE_NOT_SUPPORTED_HASH = HashingUtils::HashString("LanguageNotSupportedException");
static const int MAX_LEXICONS_NUMBER_EXCEEDED_HASH = HashingUtils::HashString("MaxLexiconsNumberExceededException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_S3_KEY_HASH = HashingUtils::HashString("InvalidS3KeyException");
static const int INVALID_TASK_ID_HASH = HashingUtils::HashString("InvalidTaskIdException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int SYNTHESIS_TASK_NOT_FOUND_HASH = HashingUtils::HashString("SynthesisTaskNotFoundException");
static const int INVALID_SAMPLE_RATE_HASH = HashingUtils::HashString("InvalidSampleRateException");
static const int INVALID_LEXICON_HASH = HashingUtils::HashString("InvalidLexiconException");
static const int INVALID_S3_BUCKET_HASH = HashingUtils::HashString("InvalidS3BucketException");
static const int LEXICON_SIZE_EXCEEDED_HASH = HashingUtils::HashString("LexiconSizeExceededException");
static const int MAX_LEXEME_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MaxLexemeLengthExceededException");
static const int INVALID_SSML_HASH = HashingUtils::HashString("InvalidSsmlException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LEXICON_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SNS_TOPIC_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SNS_TOPIC_ARN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MARKS_NOT_SUPPORTED_FOR_FORMAT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TEXT_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::TEXT_LENGTH_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ENGINE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::ENGINE_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_PLS_LANGUAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_LANGUAGE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNSUPPORTED_PLS_ALPHABET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_ALPHABET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LANGUAGE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LANGUAGE_NOT_SUPPORTED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAX_LEXICONS_NUMBER_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXICONS_NUMBER_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_NEXT_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_S3_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_S3_KEY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TASK_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_TASK_ID), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SERVICE_FAILURE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SYNTHESIS_TASK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SYNTHESIS_TASK_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SAMPLE_RATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SAMPLE_RATE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_LEXICON_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_LEXICON), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_S3_BUCKET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_S3_BUCKET), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LEXICON_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_SIZE_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MAX_LEXEME_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXEME_LENGTH_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_SSML_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SSML), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PollyErrorMapper
} // namespace Polly
} // namespace Aws
