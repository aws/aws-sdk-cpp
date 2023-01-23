/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class GetResourceMetadataRequest : public PIRequest
  {
  public:
    AWS_PI_API GetResourceMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceMetadata"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline GetResourceMetadataRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline GetResourceMetadataRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable identifier for a data source that is unique for an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use a DB instance as a data source, specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ABCDEFGHIJKLMNOPQRSTU1VW2X</code>. </p>
     */
    inline GetResourceMetadataRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
