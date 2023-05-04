/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingHistoryUpdateSourceType.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Identifies the source of the finding change event. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingHistoryUpdateSource">AWS
   * API Reference</a></p>
   */
  class FindingHistoryUpdateSource
  {
  public:
    AWS_SECURITYHUB_API FindingHistoryUpdateSource();
    AWS_SECURITYHUB_API FindingHistoryUpdateSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryUpdateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline const FindingHistoryUpdateSourceType& GetType() const{ return m_type; }

    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline void SetType(const FindingHistoryUpdateSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline void SetType(FindingHistoryUpdateSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline FindingHistoryUpdateSource& WithType(const FindingHistoryUpdateSourceType& value) { SetType(value); return *this;}

    /**
     * <p> Describes the type of finding change event, such as a call to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> (by an integrated Amazon Web Service or
     * third party partner integration) or <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> (by a Security Hub customer). </p>
     */
    inline FindingHistoryUpdateSource& WithType(FindingHistoryUpdateSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline FindingHistoryUpdateSource& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline FindingHistoryUpdateSource& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p> The identity of the source that initiated the finding change event. For
     * example, the Amazon Resource Name (ARN) of a partner that calls
     * BatchImportFindings or of a customer that calls BatchUpdateFindings. </p>
     */
    inline FindingHistoryUpdateSource& WithIdentity(const char* value) { SetIdentity(value); return *this;}

  private:

    FindingHistoryUpdateSourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
